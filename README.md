## C언어 연습

📚 《김변수와 시작하는 코딩생활 with C언어》 Part 2 프로젝트 실습을 기반으로 작성한 코드입니다.

책에 명시된 문제와 답, 그리고 나만의 코드가 있습니다.

```bash
.
├── (문제이름)
│    ├── book_example.c  # 책이 추천하는 코드
│    ├── my_code.c       # 내가 작성한 정답
│    └── README.md       # 문제 설명
│
├── .gitignore
└── READMD.md
```

---

### 🔨 기본 빌드 명령어
✅ GCC (리눅스/macOS/Windows 공통)
```bash
gcc main.c -o main
```
| 항목	| 설명 |
| --- | --- | 
|gcc |	GNU C Compiler|
| main.c	| 컴파일할 C 소스 파일 |
| -o main | 출력 실행파일 이름 (Windows면 main.exe, macOS/Linux면 main) |

### 🧪 실행 방법
Linux/macOS:

```bash
./main
```

Windows (cmd 또는 PowerShell):

```bash
./main.exe
```
