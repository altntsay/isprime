#include <stdio.h>
#include <stdlib.h>

/*
int main(){
int a,b;
printf("toplam saat:\n");
scanf("%d",&a);
if (a>=0 && a<=4){

    b=10;
    printf("\n vereceginiz ucret= %d",b);
}
else if (a>=5 && a<=8){

    b=12;
    printf("\n vereceginiz ucret= %d",b);
}
else if (a>=9 && a<=12){

    b=15;
    printf("\n vereceginiz ücret= %d",b);
}
else if (a>=13){

    b=20;
    printf("\n vereceginiz ucret= %d",b);
}


return 0;



}
*/
/*
int main(){
  int a,b,c,d;
  printf("elimizde bulunan bakteri sayýsýný giriniz:\n");
  scanf("%d",&a);
  printf("kaçýncý saat sonundaki bakteri sayýsýný ögrenmek istiyorsunuz:\n");
  scanf("%d",&b);
  d=pow(2,b);
  c=a*d;
  printf("\n elinizde bulunacak son bakteri sayýsý= %d",c);
  return 0;

}
*/

/*
int girilen=0;
    int toplam=0;
    int sayac=0;
    int ort=0;
    while(girilen!=-1){
        scanf("%d",&girilen);
        if (girilen==-1){
            break;
        }
        toplam=toplam+girilen;
        sayac++;
    }
    ort=toplam/sayac;
    printf("ortalama=%d",ort);
    */
int isPrime(int x){
    int i = 2;
    if(x == 1){
        return 0;
    }
    if (x == 2 || x%i==0){
        return 0;
    }
    if (x%i !=0)
    {
        return 1;

    }
    else{
            i++;
        isPrime(x);
        }
    }
int main(){
    int x;

    printf("sayi giriniz:\n");
    scanf("%d",&x);
    if (isPrime(x)){
        printf("Asal sayi girdiniz");
    }else{printf("Sayiniz asal deðil");}
    return 0;
    }













