#include<stdio.h>
struct Student
{
    char name[48];
    int rollno;
    float score;
    double age;
    struct Subject
    {
      float maths;
      float english;

    };

};



int main ()
{
    struct Student stu;
    struct Subject sub;

    struct Subject *ptr;
    struct Student *ptr1;

    int i;
    ptr=&sub;
    ptr1=&stu;

    printf ("size of struct is %d\n",sizeof(struct Student));

    printf ("Enter the Name of the Student:");
    scanf ("%s",ptr1->name);


    ptr->maths=100;
    ptr->english=98;

    printf ("Marks in Maths is %.2f\n",ptr->maths);
    printf ("Marks in English is %.2f\n",ptr->english);

    ptr1->score =ptr->maths+ptr->english;

    printf ("The total score of student in all subject is %.2f\n",ptr1->score);

    return 0;
}





