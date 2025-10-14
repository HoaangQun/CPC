# Chọn Tập Con
time limit per second : 1.0 second

memory limit per test : 256 megabytes

Cho $n$ số nguyên dương $a_i$ và một số nguyên dương $S$. Đếm số cách chọn tập con của mảng $a$, sao cho tập con đó có tổng là $S$.

## Input
Dòng đầu là 2 số nguyên dương $n$ , $S$ ($1$ $\leq$ $n$ $\leq$ $40$, 1 $\leq$ $S$ $\leq$ $10^9$ )

Dòng thứ 2 là $n$ số nguyên $a_i$ (1 $\leq$ $a_i$ $\leq$ $10^9$).

Subtask 1 (22.5%): $n$ $\leq$ $20$

Subtask 2 (77.5%): $n$ $\leq$ $40$

### Example
#### input
```
4 10
6 2 2 4
```
#### output
```
2
```

#### input
```
4 5
1 2 2 3
```
#### output
```
3
```
