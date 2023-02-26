# code
1. ch01
   - [hello](https://github.com/heaven324/C_study/blob/main/code/ch01/hello.c)
2. ch02
   - [float](https://github.com/heaven324/C_study/blob/main/code/ch02/float.c), [variable](https://github.com/heaven324/C_study/blob/main/code/ch02/variable.c)
3. ch03
   - [Arithmetic_Operator](https://github.com/heaven324/C_study/blob/main/code/ch03/Arithmetic_Operator.c), [Bit_Operator](https://github.com/heaven324/C_study/blob/main/code/ch03/Bit_Operator.c), [fix_Operator](https://github.com/heaven324/C_study/blob/main/code/ch03/fix_Operator.c)
4. ch04
   - [char](https://github.com/heaven324/C_study/blob/main/code/ch04/char.c), [scanf](https://github.com/heaven324/C_study/blob/main/code/ch04/scanf.c)
5. ch05
   - [if_state](https://github.com/heaven324/C_study/blob/main/code/ch05/if_state.c)
5. ch06
   - [for_state](https://github.com/heaven324/C_study/blob/main/code/ch06/for_state.c), [break_state](https://github.com/heaven324/C_study/blob/main/code/ch06/break_state.c), [continue_state](https://github.com/heaven324/C_study/blob/main/code/ch06/continue_state.c), [while_state](https://github.com/heaven324/C_study/blob/main/code/ch06/while_state.c), [do_while_state](https://github.com/heaven324/C_study/blob/main/code/ch06/do_while_state.c)
   - [test1](https://github.com/heaven324/C_study/blob/main/code/ch06/test1.c), [test2](https://github.com/heaven324/C_study/blob/main/code/ch06/test2.c), [test3](https://github.com/heaven324/C_study/blob/main/code/ch06/test3.c), [test4](https://github.com/heaven324/C_study/blob/main/code/ch06/test4.c), [test5](https://github.com/heaven324/C_study/blob/main/code/ch06/test5.c), [test6](https://github.com/heaven324/C_study/blob/main/code/ch06/test6.c)

# Context
## 한글 깨짐
`chcp 65001 // cmd에서 한글깨짐 명령어로 해결`

## 주석
/* \
여러줄 주석 \
*/ \
//한줄 주석 \


## 변수의 자료형
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


## 연산자
| Operator |                                  |
|:--------:| :--------------------------------|
| =        | 대입 연산자(Assignment Operator) |
| +        |                                  |
| -        |                                  |
| *        |                                  |
| /        | int형은 정수부분만 남김          |
| %        | 오직 정수형 데이터만 연산 가능   |

## 비트연산자
| Operator |              |
|:--------:|:-------------|
| &        | AND 연산자   |
| \|       | OR 연산자    |
| ^        | XOR 연산자   |
| ~        | 반전 연산자  |
| <<       | Shift 연산자 |
| >>       | Shift 연산자 |

## 연산자 우선순위
| 우선순위 | Operator                                        | 방향       |
|:-------:|:------------------------------------------------|:-----------:|
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

## 문자(ASCII 코드 표 : *American Standard Code for Information*)
| Decimal | ASCII | Decimal | ASCII | Decimal | ASCII | Decimal | ASCII | Decimal | ASCII | Decimal | ASCII |
|:-------:|:-----:|:-------:|:-----:|:-------:|:-----:|:-------:|:-----:|:-------:|:-----:|:-------:|:-----:|
| 0       | NULL  | 22      | SYN   | 44      | ,     | 66      | B     | 88      | X     | 110     | n     |
| 1       | SOH   | 23      | ETB   | 45      | -     | 67      | C     | 89      | Y     | 111     | o     |
| 2       | STX   | 24      | CAN   | 46      | .     | 68      | D     | 90      | Z     | 112     | p     |
| 3       | ETX   | 25      | EM    | 47      | /     | 69      | E     | 91      | [     | 113     | q     |
| 4       | EOT   | 26      | SUB   | 48      | 0     | 70      | F     | 92      | \     | 114     | r     |
| 5       | ENQ   | 27      | ESC   | 49      | 1     | 71      | G     | 93      | ]     | 115     | s     |
| 6       | ACK   | 28      | FS    | 50      | 2     | 72      | H     | 94      | ^     | 116     | t     |
| 7       | BEL   | 29      | GS    | 51      | 3     | 73      | I     | 95      | _     | 117     | u     |
| 8       | BS    | 30      | RS    | 52      | 4     | 74      | J     | 96      | `     | 118     | v     |
| 9       | HT    | 31      | US    | 53      | 5     | 75      | K     | 97      | a     | 119     | w     |
| 10      | LF    | 32      | SP    | 54      | 6     | 76      | L     | 98      | b     | 120     | x     |
| 11      | VT    | 33      | !     | 55      | 7     | 77      | M     | 99      | c     | 121     | y     |
| 12      | FF    | 34      | "     | 56      | 8     | 78      | N     | 100     | d     | 122     | z     |
| 13      | CR    | 35      | #     | 57      | 9     | 79      | O     | 101     | e     | 123     | {     |
| 14      | SO    | 36      | $     | 58      | :     | 80      | P     | 102     | f     | 124     | |     |
| 15      | SI    | 37      | %     | 59      | ;     | 81      | Q     | 103     | g     | 125     | }     |
| 16      | DLE   | 38      | &     | 60      | <     | 82      | R     | 104     | h     | 126     | ~     |
| 17      | DC1   | 39      | '     | 61      | =     | 83      | S     | 105     | i     | 127     | DEL   |
| 18      | SC2   | 40      | (     | 62      | >     | 84      | T     | 106     | j     |         |       |
| 19      | SC3   | 41      | )     | 63      | ?     | 85      | U     | 107     | k     |         |       |
| 20      | SC4   | 42      | *     | 64      | @     | 86      | V     | 108     | l     |         |       |
| 21      | NAK   | 43      | +     | 65      | A     | 87      | W     | 109     | m     |         |       |

## 조건문
```c
if (조건문) { 
   조건문이 참이면 실행
} else if (조건문이 거짓일때 다시 조건문) {
   다시 조건문이 참이 때 실행
} else {
   조건문이 모두거짓이면 실행
}
```
   - 조건문에 논리연산자 (&& : AND, || : OR)로 두 조건을 붙여서 사용 가능
   - 조건문사용시 (!(조건문))을 입력하면 조건문의 결과(bool값)의 반대로 리턴.

## for문(for statement)
```c
for ( <초기식>; <조건식>, <증감식>) {
   명령1;
   명령2;
   break; // 조건식과 무관하게 for문을 빠져나옴
   continue; // 다음 반복문으로 넘어감
}
```

## while문
- 조건식이 참인지 먼저 검사 후 명령 진행.
```c
while ( <조건식> ) {
   명령1;
   명령2;
}
```

## do-while문
- 명령 진행 후 조건식이 참인지 검사.
```c
do {
   명령1;
   명령2;
} while ( <조건식> );
```

## switch 문
- jump table로 비교 CMP연산을 진행하기 때문에 if-else보다 효율성에서 차이가 있을 수 있다.
- switch문에 사용될 변수로는 반드시 정수가 들어가야 한다.(char, short, int, long)
  - jump table로 연산을 진행하기 때문이다.
- '값'에 위치하는 것들이 무조건 상수여야 한다.
  - '값'부분에 변수가 들어가면 jump table에 무엇이 올 지 알 수 없음.
- `break;`의 역할은 모든 case를 무시하고 switch밖으로 빠져나가기 위함임.

```c
switch (/*변수*/) {
   case /*값1*/;
       // 명령들;
       break;
   case /*값2*/;
       // 명령들;
       break;
   //...
   default;
       // 명령들;
       break;
}
```

# 호출 함수 
## stdio.h
| `printf();` |화면 출력 함수|                       |
|:------------|:------------|:-----------------------|
|             | %o          | 8진수                  |
|             | %d          | 10진수                 |
|             | %x          | 16진수                 |
|             | %f          | 실수형 변수 출력       |
|             | %.2f        | 소수점 지정 출력       |
|             | %5d         | 자리수 맞추어 출력     |
|             | %%          | %를 문자로 출력        |
|             | %u          | unsigned 타입으로 해석 |

| `scanf();` |화면 입력 함수|                 |
|:-----------|:------------|:-----------------|
|            | &변수       | 해당 변수에 할당 |
|            | %c          | char             |
|            | %hd         | short            |
|            | %d          | int              |
|            | %ld         | long             |
|            | %f          | float            |
|            | %lf         | double           |

