# Palindrome
time limit per second : 1.0 second

memory limit per test : 256 megabytes

Cho xâu $s$ và $q$ truy vấn, với mỗi truy vấn kiểm tra từ đoạn $s_l$ đến đoạn $s_r$ có phải xâu đối xứng không.

## Input
Một xâu $s$ ($|s| \leq 10^6$).

Số lượng truy vấn $q$.

$q$ dòng tiếp theo mỗi dòng là cặp số $l$,$r$ ($1 \leq l \leq r \leq |s|$).
## Output
In ra độ dài lớn nhất đạt được.

### Example
#### input
```
abbacdc
5
1 4
5 7
2 3
2 2
1 2
```

#### output
```
YES
YES
YES
YES
NO
```