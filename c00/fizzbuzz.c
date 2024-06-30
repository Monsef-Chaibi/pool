#include <unistd.h>

void ft_putchar (char c)
{
    write(1,&c,1);
}
void ft_fizzbuzz(int nb)
{
    if ( nb % 5 == 0 && nb % 3 == 0)
    {
        write(1,"Fizz\n",5);
       
    }
    else if (nb % 5 == 0)  {
        write(1,"Buzz\n",5);
        
    }
    else if (nb % 3 == 0)
    { 
        write(1,"FizzBuzz\n",9);
       
    }
    else{
        printf("%d\n" , nb);
    }

}

int main (){
    int i =1;
    while (i <= 25)
    {
        ft_fizzbuzz(i);
        i++;
    }
    return 0 ;
}