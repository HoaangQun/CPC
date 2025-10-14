# Chọn lớp
time limit per second : 1.0 second

memory limit per test : 256 megabytes

Có $n$ lớp học bắt đầu lúc $l_i$ kết thúc vào $r_i$ và nhận được $w_i$ lương nếu dạy.

Tìm cách chọn lớp để đạt mức lương cao nhất.

## Input
Dòng đầu là số nguyên dương $n$ ($1 \leq n \leq 2.10^5$).

$n$ dòng tiếp theo, mỗi dòng là một bộ số li, ri và wi ($1 \leq l_i \leq r_i$,$w_i \leq 10^9$).

Subtask 1 (50%): $n$,$l_i$,$r_i$,$w_i \leq 1000$.

Subtask 2 (50%): Không có giới hạn gì thêm.

## Output
Mức lương cao nhất có thể nhận.

### Example
#### input
```
4
1 4 4
5 10 6
2 3 2
4 10 9
```

#### output
```
11
```
