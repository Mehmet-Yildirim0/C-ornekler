#include <stdio.h>

int main(int argc, const char * argv[]) {
//bir dizi tek boyutlu ise vektör çok boyutlu ise matris denir
//int x [5] [10]; dediğimizde bunun 5 satır 10 sutunu olur yanı 50 elamnı olur
//değer vermek mümkündür=> int x[2] y[3] = {1,2,3,4,5,6} ilk satır:1 2 3  ikinci satır  4 5 6 olur (burada neden y yazdığını anlamadım sonradan okuyorum şuan
    
/* kolay ve mantığı anlamak için öenmli  bir örnek

    int i,j;
    int dizi[3][4] = {11,23,13,15,//Birinci satır
                      24,54,76,45,//ikinci satır
                      97,53,38,34,//üçüncü satır
        
    };
    for (i=0; i<3; i++) {
        for (j=0; j<4; j++) {
            printf("%d\t",dizi[i][j]);
        }
        printf("\n");
    }
    return 0;
}
 */

    //2. örnek iki matrisin toplamı
    /*
    int i,j;
    int dizia[2][3] = {11,22,33, 44,55,66};
    int dizib[2][3]= {23,43,54, 66,75,89};
    int dizic[2][3];
    
    printf("A matrisi:\n");
    for (i=0; i<2; i++) {
        for (j=0; j<3; j++) {
            printf("%d ",dizia[i][j]);
        }
        printf("\n");
    }
    printf("B matrisi:\n");
    for (i=0; i<2; i++) {
        for (j=0; j<3; j++) {
            printf("%d ",dizib[i][j]);
        }printf("\n");
    }
    printf("C matrisi:\n");
    for (i=0; i<2; i++) {
        for (j=0; j<3; j++) {
            dizic[i][j]=dizib[i][j]+dizia[i][j];
            printf("%d ",dizic[i][j]);
        }printf("\n");
    }
    return 0;
}
     */
    //3.örnek: 3 öğrencinin sınav notunu alıp agırlık ortalamsaını bulamma
    //efsane bi kod oldu beğendim
    /*
    float ort,ogrn[3][3];
    int i;
    for (i=0; i<3; i++) {
        printf("Ahmet'in Notlarını giriniz:");
        scanf("%f",&ogrn[0][i]);
       
    }
    

    for (i=0; i<3; i++) {
        printf("Mehmet'in Notlarını giriniz:");
        scanf("%f",&ogrn[1][i]);}
    
    for (i=0; i<3; i++) {
        printf("Ayşe'nin Notlarını giriniz:");
        scanf("%f",&ogrn[2][i]);}
    
    
    for (i=0; i<3; i++)
        printf("%d. sınav notu:%3.2f\t",i+1,ogrn[0][i]);
    
    printf("\n");
    
    for (i=0; i<3; i++)
        printf("%d. sınav notu:%3.2f\t",i+1,ogrn[1][i]);
    
    printf("\n");

    for (i=0; i<3; i++)
        printf("%d. sınav notu:%3.2f\t",i+1,ogrn[2][i]);
    
    printf("\n");
    printf("********Sınavların ağırlı ortalamaları******\n");
    
    for (i=0; i<3; i++) {
     //burada çok öğretici bir hata yaptım alttakinin tersini yazdım yani ort değerini bu toplama eşitlemeye kalktım fakat dizi degerini ort eşitler gibi oldugundan yanlış oldu
        ort=(ogrn[0][i]+ogrn[1][i]+ogrn[2][i])/3;
        printf("%d. sınavın ağırlık otralaması:%.2f\n",i+1,ort);
    }
    return 0;
}
*/
    /*
    //4.örnek 2 matrisin çarpımı
    //yine satır ve sutun eşit olmalı
    
    int a[3][3] = { 5,7,9 ,0,3,0 ,7,5,1};
    int b[3][3] = { 3,3,1, 2,1,3 ,1,0,0};
    int c[3][3] = { };
    int i,j,k,toplam;
    
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            toplam=0;
            for (k=0; k<3; k++) {
                toplam+=a[i][k]*b[k][j];
            }
            c[i][j] = toplam;
            printf("%4d",c[i][j]);
        }
        printf("\n");
    }
    */
    //5.örnek matrisli bir şey
    //zor ama güzel bir örnek helal bana
/*
    float determinat,matrisa[2][2],matrisc[2][2];
    for (int i=0 ; i<2; i++) {
        for (int j=0; j<2; j++) {
            printf("1.matrisin [%d][%d] değerlerini giriniz",i,j);
            scanf("%f",&matrisa[i][j]);
        }
    }
    for (int i=0 ; i<2; i++) {
        for (int j=0; j<2; j++) {
            printf("1.matrisin [%d][%d] degeri:%.2f\n",i,j,matrisa[i][j]);
            }}
    determinat=matrisa[0][0]*matrisa[1][1]-matrisa[0][1]*matrisa[1][0];
    
    if (determinat==0) {
        printf("Bu matrisin detarminatı sıfırdır ve tersi olmaz.\n");
    }
    else{
        printf("Bu matrisin detarminatı:%f ve tersi vardır.\n",determinat);
        printf("Matrisin tersi>>\n");
        matrisc[0][0]=matrisa[1][1]/determinat;
        matrisc[0][1]=-1*matrisa[0][1]/determinat;
        matrisc[1][0]=-1*matrisa[1][0]/determinat;
        matrisc[1][1]=matrisa[0][0]/determinat;
        
        for (int i=0 ; i<2; i++) {
            for (int j=0; j<2; j++) {
                printf("matrisin tersi [%d][%d] degeri:%.2f\n",i,j,matrisc[i][j]);
                }}}
*/
    //6.örnek klavyeden alınan iki diziyi toplayan dizi
/*
 
    int a[2][2],b[2][2],c[2][2];
    
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            printf("A dizisinin [%d][%d] degerini giriniz",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            printf("B dizisinin [%d][%d] degerini giriniz",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            c[i][j]= a[i][j]+b[i][j];
        }}
    printf("C dizisinin değerlleri:\n");
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            
            printf("%d\n",c[i][j]);
        }}

    return 0;
}
 */

