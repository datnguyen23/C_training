#define D 10
#define ABC 1

#define ADD(x,y) x + y
#define FUNC(a,b) func(a,b)
#define LISTVAR(var) {  int test1_##var;\
                        float test2_##var;}

void func(int a,int b)
{
    a - b;
}

#if ABC == 1
    #define KIET "something"
#else
    #define KIET "some guys"
#endif

int main()
{
    LISTVAR(kiet);
    char q[20] = {KIET};
    int a = 10;
    int c = a;
    int b = ADD(a,c);
    func(a,b);
    FUNC(a,b);
    return 0;

}