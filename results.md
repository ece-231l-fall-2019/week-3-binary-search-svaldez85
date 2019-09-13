##Results

1. make with -g flags:

|  Type  | Vector Time  | Pointers Time |
|--------|--------------|---------------|
| Linear | 1.37999s     | 1.14s         |
| Binary | 0.000274499s | 0.00043517s   |

2. make fast:
|  Type  | Vector Time  | Pointers Time |
|--------|--------------|---------------|
| Linear | 0.826269s    | 0.611005s     |
| Binary | 0.000244805s | 0.000244133s  |

##Discussion:
   For both the make fast and make with -g flags executions of the program 
the binary search functions worked faster then the linear search functions.
Though it caused a less prominent time reduction on the make fast execution 
of the results, the pointer implementations of the linear and binary searches worked faster than their non-pointer counterparts. This difference would have 
been more dramatic if the vector searches created a copy instead of ucing a 
reference to the search vector. However, the time fell by about 2-3 tenths of
a second for the pointer versions of the linear functions which is still a
significant level of improvement. For the regular make execution of runtests 
the time for the binary search with pointers actually increased from the vector
version which was surprising. For other runs of the program this number was 
usually smaller. 
   After the files were executed with the make fast method the linear functions
 became much faster by a factor of about 5 tenths for both linear functions. 
This seems to indicate these functions inserted  a lot of -g flag markers for 
debugging. This is likely because the linear functions require many more 
iterations through their loops where issues could occur. The binary functions 
also saw improvement with the make fast implementation of the binary pointer
version falling by nearly 0.0002 s. Overall the change in time was evident
both with optimization and with pointers (see tables 1 and 2 for more info).
