# code
1. ch01
   - [hello](https://github.com/heaven324/C_study/blob/main/code/ch01/hello.c)
2. ch02
   - [float](https://github.com/heaven324/C_study/blob/main/code/ch02/float.c)
   - [variable](https://github.com/heaven324/C_study/blob/main/code/ch02/variable.c)
3. ch03
   - [Arithmetic_Operator](https://github.com/heaven324/C_study/blob/main/code/ch03/Arithmetic_Operator.c)
   - [Bit_Operator](https://github.com/heaven324/C_study/blob/main/code/ch03/Bit_Operator.c)
   - [fix_Operator](https://github.com/heaven324/C_study/blob/main/code/ch03/fix_Operator.c)

# Context
### 한글 깨짐
`chcp 65001 // cmd에서 한글깨짐 명령어로 해결`

### 주석
/* \
여러줄 주석 \
*/ \
//한줄 주석 \


### 변수의 자료형
변수1, 변수2, .... ; // 변수선언(선언시 최상단, 알파벳, 숫자, _ 만 가능, 예약어 불가능)
| Name        | Size   | Range                                                             |
|:------------|:-------|:------------------------------------------------------------------|
| char        | 1byte  | signed: -128 to 127 </br> unsigned: 0 to 255                      |
| short int   | 2bytes | signed: -32768 to 32767 </br> unsigned: 0 to 65535                |
| int         | 4bytes | signed: -2147483648 to 2147483647 </br> unsigned: 0 to 4294967295 |
| long int    | 4bytes | signed: -2147483648 to 2147483647 </br> unsigned: 0 to 4294967295 |
| bool        | 1byte  | true or false                                                     |
| float       | 4bytes | +/- 3.4e +/- 38 (~7 digits)                                       |
| double      | 8bytes | +/- 1.7e +/- 308 (~15 digits)                                     |
| long double | 8bytes | +/- 1.7e +/- 308 (~15 digits)                                     |


### 연산자
| Operator |                                 |
|:--------:| :-------------------------------|
| =        | 대입 연산자(Assignment Operator) |
| +        |                                 |
| -        |                                 |
| *        |                                 |
| /        | int형은 정수부분만 남김           |
| %        | 오직 정수형 데이터만 연산 가능     |

### 비트연산자
| Operator |              |
|:--------:|:-------------|
| &        | AND 연산자   |
| \|       | OR 연산자    |
| ^        | XOR 연산자   |
| ~        | 반전 연산자  |
| <<       | Shift 연산자 |
| >>       | Shift 연산자 |

### 연산자 우선순위
| 우선순위 | Operator                                        | 방향       |
|:-------:|:------------------------------------------------|:----------:|
| 1       | () [] -> . (expr)++ (expr)--                    | 왼쪽 우선   |
| 2       | ! ~ +-(부호) *P & sizeof cast --(expr) ++(expr) | 오른쪽 우선 |
| 3       | * / %                                           | 왼쪽 우선   |
| 4       | + -                                             | 왼쪽 우선   |
| 5       | << >>                                           | 왼쪽 우선   |
| 6       | < <= > >=                                       | 왼쪽 우선   |
| 7       | == !=                                           | 왼쪽 우선   |
| 8       | &                                               | 왼쪽 우선   |
| 9       | ^                                               | 왼쪽 우선   |
| 10      | \|                                              | 왼쪽 우선   |
| 11      | \&&                                             | 왼쪽 우선   |
| 12      | \|\|                                            | 왼쪽 우선   |
| 13      | ? :                                             | 오른쪽 우선 |
| 14      | =                                               | 오른쪽 우선 |
| 15      | ,                                               | 왼쪽 우선   |


## 호출 함수 
### stdio.h
| `printf();` |화면 출력 함수|                       |
|:------------|:------------|:----------------------|
|             | %o          | 8진수                 |
|             | %d          | 10진수                |
|             | %x          | 16진수                |
|             | %f          | 실수형 변수 출력       |
|             | %.2f        | 소수점 지정 출력       |
|             | %5d         | 자리수 맞추어 출력     |
|             | %%          | %를 문자로 출력        |
|             | %u          | unsigned 타입으로 해석 |

