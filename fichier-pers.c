#include<stdio.h>
#include<stdlib.h>

typedef struct personne
{
    int id;
    char nom;
}personne;

void Initpers(personne*p)
{
    printf("entrer id de personne:");
    scanf("%d",&p->id);
    printf("enter name :");
    scanf("%s",p->nom);
}
void Ajoutpers(personne *tp)
{
    int i,n;
    personne p;
    printf("enter nb of person:");
    scanf("%d",&n);
    // Dynamically allocate memory using malloc()
    tp = (int*)calloc(n,sizeof(int));
    for (i = 0; i < n; i++)
    {
        Initpers(&p);
        tp[i].id = p.id;
        tp[i].nom = p.nom;
    }    
}

int main()
{
int i,n;
personne *tp;
Ajoutpers(tp);

    FILE *fp=NULL;
    fp=fopen("pers.txt","w");
        if(fp!=NULL)
        {
            fprintf(fp,"%d-%s",tp[i].id,tp[i].nom);           
        fclose(fp);      
        } 
    return 0;
}