int lib1_func1(void);
void lib2_func2(int a);

int main()
{
    lib1_func1();
    
    int var;
    lib2_func2(var);    
}