http://www.spoj.com/problems/POTHOLE/ - Ford Fulkerson algorithm implementation basic - O(Maxflow * Edges);

What is a bipartite graph ? And how to check if one graph is given ? 

A bipartite graph is graph which can be divided into two disjoint sets such that A intersection B = phi . and no cycles of odd length
are there in a graph. and edges are  there only between the two sets .and not within the same set. 
Check if a graph is bipartite- ? It has no odd cyles. , Coloring is possible with only 2 colours. 

What is Matching ? 
Matching .is a subset of number of edges so taken so that number of edges that are incident or start from any vertex is 
not greater than one.
Maximum matching using ford fulkerson algo - spoj (TAXI)
Consider a source s and connect all taxis with flow=1 and connect all persons to sink with flow=1 rest everywhere add edge with flow = inf
capacity where you meet the required conditions satisfied between the two and find maximum flow = maximum matching.

Min s-t cut in a graph= max flow in a graph (minimum capacity that has to removed from the graph in such a way that there is no further
flow possible between the source and the sink); 



