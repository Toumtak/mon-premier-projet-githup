#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

float carre(float n){
    return n*n;
}

void sommaire(){
    printf("******TRAVAUX PRATIQUES INF131/IGE131******\n\n");
    printf("GROUPE 10\n\n");
    printf("***SOMMAIRE***\n");
    printf(" 1. EXERCICE 2.a\n 2. EXERCICE 2.b\n 3. EXERCICE 5.a\n 4. EXERCICE 6\n 5. EXERCICE 16.a\n 6. EXERCICE 19\n");
}

typedef struct enregistrement tdate;

struct enregistrement{
    int jour;
    int mois;
    int annee;
};

void date(tdate j, tdate m, tdate a, tdate jj, tdate mm, tdate aa){
    if(a.annee<aa.annee){
        printf("la date 1 vient apres la date 2\n");
    }
    else if(a.annee>aa.annee || (a.annee=aa.annee && m.mois>mm.mois)){
        printf("la date 1 vient avant la date 2\n");
    }
}


int main()
{   
	int x=0,i,s,rep=1;
    float a,b,c;
     tdate j1,m1,a1,j2,m2,a2;


    sommaire();
    

	    
    printf("\n\tS'il vous plait taper sur 1 pour commencer\n");
    
    
    while(rep==1){
    scanf("%d",&rep);
    printf("\t\t____________________\n\n");
    
	printf("\n\n enter le numero de l'exercice a executer\n");
	scanf("%d",&x);
    switch(x){
    case 1: printf("L'EXERCICE PERMET D'ECHANGER LE CONTENU DE DEUX VARIABLES\n");
            printf("entrer deux nombres a permuter\n");
            scanf("%f%f",&a,&b);
            printf("les valeurs avant l'echange: a=%f b=%f\n",a,b);
            c=a;
            a=b;
            b=c;
            printf("les valeurs apres l'echange: a=%f b=%f",a,b);
            break;
    case 2: printf("L'EXERCICE TESTE UN NOMBRE S'IL EST POSITIF, NEGATIF OU NUL\n");
            printf("enter un nombre de votre choix\n");
            scanf("%f",&a);
            if(a<0){
                printf("ce nombre est negatif\n");
            }
            else if(a>0){
                printf("ce nombre est positif\n");
            }
            else {
                printf("ce nombre est nul\n");
            }
            break;
    case 3: printf("L'EXERCICE CALCULE LE VOLUME D'UNE SPHERE\n");
            printf("enter le rayon du sphere\n");
            scanf("%f",&b);
            c=(4*pi*b*b*b)/3;
            printf("le volume du sphere est de %f",c);
            break;
    case 4: printf("L'EXERCICE FAIT LA SOMME DES ENTIERS TERMINANT PAR ZERO\n");
            s=0;
            do{
                printf("entrer un entier\n");
                scanf("%d",&i);
                s=s+i;
            }
            while(i!=0);
            printf("la somme des entiers est %d",s);
            break;
    case 5: printf("L'EXERCICE DONNE LE CARRE D'UN NOMBRE A TRAVERS LA FONCTION CREE\n");
            scanf("%f",&a);
            b=carre(a);
            printf("le carre de %f est %f",a,b);
            break;
    case 6: printf("L'EXERCICE PERMET DE MONTRER SI LA DATE 1 VIENT APRES OU AVANT LA DATE 2\n");
			 printf("enter la date 1\n");
   			 scanf("%d %d %d",&j1.jour,&m1.mois,&a1.annee);

    		 printf("enter la date 2\n");
   			 scanf("%d %d %d",&j2.jour,&m2.mois,&a2.annee);

    		date(j1,m1,a1,j2,m2,a2);
    		break;


    default: printf("le choix indisponible\n");

    }
    printf("\n\t pour recommencer, appuyer sur 1\n");
    }
    return 0;
}
