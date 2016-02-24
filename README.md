# parallel-matrix-multiplication


##Generating Random input

If you want to create two random sparse matrices of dimensions n,m and m,p follow these steps. 

```
$ git clone https://github.com/hackerkid/parallel-matrix-multiplication
$ cd parallel-matrix-multiplication
$ g++  	create_matrix_mul_input.cpp
$ ./a.out
n
m
p
```

where n, m, p are the dimensions of the matrices. The program creates an input file called `input.in` of the for
