#include <stdio.h>

typedef struct {char nome[50]; float n1, n2, n3;} Aluno;

float media(Aluno al){
    return (al.n1 + al.n2 + al.n3) / 3;
}

int main()
{
    Aluno alunos[3] = {
        {"Aluno 1", 6.7, 8.5, 7.0},
        {"Aluno 2", 8.0, 6.9, 6.0},
        {"Aluno 3", 5.9, 7.7, 10}
    };
    
    float maior_media = 0.0;
    Aluno aluno_maior_media;
    
    for(int i = 0; i < 3; i++) {
        float media_aluno = media(alunos[i]);
        if(media_aluno > maior_media){
            maior_media = media_aluno;
            aluno_maior_media = alunos[i];
        }
    }
    
    printf("%s: %.2f\n", aluno_maior_media.nome, media(aluno_maior_media));

    return 0;
}
