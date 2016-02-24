# parallel-matrix-multiplication

##Input format

```
n m p
k1 k2

x1 y1 w1
....
....
xk1 yk1 wk1

x1 y1 w1
....
....
xk2 yk2 wk2

```

where n m p denotes the dimensions n m and m p
k1 and k2 denotes the number of non zero elements in matrix a and b

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
