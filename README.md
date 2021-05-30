## Bellman-Ford Algorithm
This algorithm was written using C++ language. 
### Input
To run the algorithm correctly, there is a .txt file needed. The programme will ask for the .txt file name (in this case: list1.txt or list2.txt \[they are located in the cmake-build-debug folder\]).<br><br>
<b>The .txt file consists of (integer variables):</b><br>
number_of_nodes number_of_edges starting_node<br>
(edge_1) from_node_1 destination_node_1 cost_1<br>
(edge_2) from_node_2 destination_node_2 cost_2<br>
...<br>
(edge_m) from_node_m destination_node_m cost_m<br><br>
<b> Example: </b><br>
5 8 0<br>
0 1 9<br>
0 2 3<br>
1 2 6<br>
1 4 2<br>
2 1 2<br>
2 3 1<br>
3 2 2<br>
3 4 2<br>
### Output
The programme will create result.txt file (in the same folder where other .txt files are located). 