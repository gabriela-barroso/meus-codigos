
 #include<bits/stdc++.h>

 using namespace std;
 
 typedef pair<int,int> pii;
 
 int buscaLargura(int origem, int destino,vector<bool> passado)
 {
     int canal_atual,cliques;
     queue<pii> q;
     
     q.push(make_pair(origem,0));
     passado[origem] = true;
     
     while(!q.empty())
     {
         tie(canal_atual,cliques) = q.front();
         q.pop();
         
         if(canal_atual == destino)
             return cliques;
         
         if(canal_atual%2 == 0 && passado[canal_atual/2]==false)
         {
             passado[canal_atual/2] = true;
             q.push(make_pair(canal_atual/2,cliques+1));
         }
         
         if(canal_atual+1 <= 100000 && passado[canal_atual+1] == false)
         {
             passado[canal_atual+1] = true;
             q.push(make_pair(canal_atual+1,cliques+1));
         }
         
         if(canal_atual*2 <= 100000 && passado[canal_atual*2] == false)
         {
             passado[canal_atual*2] = true;
             q.push(make_pair(canal_atual*2,cliques+1));
         }
         
         if(canal_atual*3 <= 100000 && passado[canal_atual*3] == false)
         {
             passado[canal_atual*3] = true;
             q.push(make_pair(canal_atual*3,cliques+1));
         }
         
         if(canal_atual-1 > 0 && passado[canal_atual-1] == false)
         {
             passado[canal_atual-1] = true;
             q.push(make_pair(canal_atual-1,cliques+1));
         }
     }
     return -1;
 }
 
 int main()
 {
     int origem, destino, k,aux,ans;
     
     scanf("%d %d %d",&origem,&destino,&k);
     
     while(origem || destino || k)
     {
         vector<bool> flag(100001,false);
         
         for(int i = 0; i < k; i++)
         {
             scanf("%d",&aux);
             flag[aux] = true;
         }
         
         printf("%d\n",buscaLargura(origem,destino,flag));
         
         scanf("%d %d %d",&origem,&destino,&k);
     }
     
     return 0;
 }