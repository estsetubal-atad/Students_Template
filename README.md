# Students_Template

This is a C program *template* derived from:

[https://github.com/estsetubal-atad/CProgram_Template](https://github.com/estsetubal-atad/CProgram_Template)

## What's different?

It includes the following types:

```cpp
typedef struct student {
    char name[200];
    char number[12];
    int grade;
} Student;

typedef struct student* PtStudent;
```

and loads student data from a *csv* file:

```markdown
Shelby Newton;5047531556;6
Hanae Franklin;3921901511;12
Otto Skinner;0888133980;19
Jena Sharp;6505301888;11
Rana Hatfield;6694022544;8
Keely Macdonald;0054730467;10
Aidan Lopez;9796032844;9
...
```
