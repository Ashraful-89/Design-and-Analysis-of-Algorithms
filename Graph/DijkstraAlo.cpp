class Solution {
public:
int N = 10000;
int dijkstra(int source,int n, vector <pair<int,int>> g[10000]) {
  vector<int> vis(N,0);
  vector<int> dist(N,INT_MAX);
  
  set <pair<int,int>> st;
  st.insert({0,source});
  
  dist[source] = 0;
  while(st.size() > 0) {
    auto node = *st.begin();
    int v = node.second;
    int v_dist = node.first;
    st.erase(st.begin());
    
    if(vis[v]) continue;
    vis[v] = 1;
    for(auto child : g[v]){
      int child_v = child.first;
      int wt = child.second;
      if(dist[v] + wt < dist[child_v]){
        dist[child_v] = dist[v] + wt;
        st.insert({dist[child_v],child_v});
      }
    }
  }
  int ans = 0;
  for(int i = 1; i <= n; i++) {
      if(dist[i] == INT_MAX) return -1;
      ans = max(ans,dist[i]);

  }
  return ans;
  
}

 int networkDelayTime(vector<vector<int>>& times, int n, int k) {
     vector <pair<int,int>> g[N];
     for(auto v : times) {
         g[v[0]].push_back({v[1],v[2]});
     }
     return dijkstra(k,n,g);   
    }
};
