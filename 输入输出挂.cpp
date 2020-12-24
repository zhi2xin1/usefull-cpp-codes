#include <cstdio>
#include <iostream>

//仅正整数
inline void writeUnsigned(int x)
{
    if(x>9)
        writeUnsigned(x/10);
    putchar(x%10+'0');
}

//整数
inline void writeSigned(int x)
{
    if(x<0)
    {
        putchar('-');
        x=-x;
    }
    if(x>9)
        writeSigned(x/10);
    putchar(x%10+'0');
}

//整数
inline void readSigned(int &x)
{
    bool f=1;
    char s=getchar();
    x=0;
    while(s<'0'||s>'9'){if(s=='-')f=-1;s=getchar();}
    while(s>='0'&&s<='9'){x=x*10+s-'0';s=getchar();}
    x*=f;
}

//仅正整数
inline void readUnsigned(int &x)
{
    x=0;
    char s=getchar();
    while(s<'0'||s>'9')
        s=getchar();
    while(s>='0'&&s<='9'){
        x=x*10+s-'0';
        s=getchar();
    }
}

//通用
//std::ios::sync_with_stdio(false);
std::istream::sync_with_stdio(false);
std::ostream::sync_with_stdio(false);
std::cin.tie(0);
std::cout.tie(0);
