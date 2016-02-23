# parallel-matrix-multiplication

The `mega_large.in`contains 2 sparse matrixes of size `1000 1001`and `1001 1002`. The product of these two matrix is found in `output.out`

The output file is **SUPER** big. Use `diff` for checking whether your output is matching or not. 
##Generating Random input

If you want to create two random sparse matrixes of dimensions n,m and m,p follow these steps. 

```
$ git clone https://github.com/hackerkid/parallel-matrix-multiplication
$ cd parallel-matrix-multiplication
$ g++  	create_matrix_mul_input.cpp
$ ./a.out
n
m
p
```

where n, m, p are the dimensions of the matrixes. The program creates an input file called `input.in` of the format

n m

m p

matrix A

matrix B
