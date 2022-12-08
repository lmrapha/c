#include <stdio.h>


// thanks to https://sites.google.com/a/liesenberg.biz/cjogos/home/materiais-de-apoio/materiais-complementares/tabela-ascii

/* Valores distorcidos */
// agudo
#define D_A_ACUTE -63 // Á
#define D_E_ACUTE -55 // É
#define D_I_ACUTE -51 // Í
#define D_O_ACUTE -45 // Ó
#define D_U_ACUTE -38 // Ú
#define D_a_ACUTE -31 // á
#define D_e_ACUTE -23 // é
#define D_i_ACUTE -19 // í
#define D_o_ACUTE -13 // ó
#define D_u_ACUTE -6  // ú
// circunflexo
#define D_A_CIRC -62 // Â
#define D_E_CIRC -54 // Ê
#define D_O_CIRC -44 // Ô
#define D_a_CIRC -30 // â
#define D_e_CIRC -22 // ê
#define D_o_CIRC -12 // ô
// grave
#define D_A_GRAVE -64 // À
#define D_a_GRAVE -32 // à
// til
#define D_A_TILDE -61 // Ã
#define D_O_TILDE -43 // Õ
#define D_N_TILDE -47 // Ñ
#define D_a_TILDE -29 // ã
#define D_o_TILDE -11 // õ
#define D_n_TILDE -15 // Õ
// trema
#define D_U_UML -36 // Ü
#define D_u_UML -4  // ü
// cedilha
#define D_C_CEDIL -57 // Ç
#define D_c_CEDIL -25 // ç

/* Valores reais */
// agudo
#define R_A_ACUTE 181 // Á
#define R_E_ACUTE 144 // É
#define R_I_ACUTE 214 // Í
#define R_O_ACUTE 224 // Ó
#define R_U_ACUTE 233 // Ú
#define R_a_ACUTE 160 // á
#define R_e_ACUTE 130 // é
#define R_i_ACUTE 161 // í
#define R_o_ACUTE 162 // ó
#define R_u_ACUTE 163 // ú
// circunflexo
#define R_A_CIRC 182 // Â
#define R_E_CIRC 210 // Ê
#define R_O_CIRC 226 // Ô
#define R_a_CIRC 131 // â
#define R_e_CIRC 136 // ê
#define R_o_CIRC 147 // ô
// grave
#define R_A_GRAVE 183 // À
#define R_a_GRAVE 133 // à
// til
#define R_A_TILDE 199 // Ã
#define R_O_TILDE 229 // Õ
#define R_N_TILDE 165 // Ñ
#define R_a_TILDE 198 // ã
#define R_o_TILDE 228 // õ
#define R_n_TILDE 164 // ñ
// trema
#define R_U_UML 154   // Ü
#define R_u_UML 129   // ü
                      // cedilha
#define R_C_CEDIL 128 // Ç
#define R_c_CEDIL 135 // ç

/*Função que corrige distorção de caractere constante*/
char cc(char c)
{
    switch (c)
    {
    case D_A_ACUTE:
        return R_A_ACUTE; // Á
    case D_E_ACUTE:
        return R_E_ACUTE; // É
    case D_I_ACUTE:
        return R_I_ACUTE; // Í
    case D_O_ACUTE:
        return R_O_ACUTE; // Ó
    case D_U_ACUTE:
        return R_U_ACUTE; // Ú
    case D_a_ACUTE:
        return R_a_ACUTE; // á
    case D_e_ACUTE:
        return R_e_ACUTE; // é
    case D_i_ACUTE:
        return R_i_ACUTE; // í
    case D_o_ACUTE:
        return R_o_ACUTE; // ó
    case D_u_ACUTE:
        return R_u_ACUTE; // ú
    case D_A_CIRC:
        return R_A_CIRC; // Â
    case D_E_CIRC:
        return R_E_CIRC; // Ê
    case D_O_CIRC:
        return R_O_CIRC; // Ô
    case D_a_CIRC:
        return R_a_CIRC; // â
    case D_e_CIRC:
        return R_e_CIRC; // ê
    case D_o_CIRC:
        return R_o_CIRC; // ô
    case D_A_GRAVE:
        return R_A_GRAVE; // À
    case D_a_GRAVE:
        return R_a_GRAVE; // à
    case D_A_TILDE:
        return R_A_TILDE; // Ã
    case D_O_TILDE:
        return R_O_TILDE; // Õ
    case D_N_TILDE:
        return R_N_TILDE; // Ñ
    case D_a_TILDE:
        return R_a_TILDE; // ã
    case D_o_TILDE:
        return R_o_TILDE; // õ
    case D_n_TILDE:
        return R_n_TILDE; // ñ
    case D_U_UML:
        return R_U_UML; // Ü
    case D_u_UML:
        return R_u_UML; // ü
    case D_C_CEDIL:
        return R_C_CEDIL; // Ç
    case D_c_CEDIL:
        return R_c_CEDIL; // ç
    default:
        return c;
    }
}
int main(void)
{
    int i;
    char c;
    char vogal[5] = {'a', 'e', 'i', 'o', 'u'};
    char agudo[10] = {'Á', 'É', 'Í', 'Ó', 'Ú', 'á', 'é', 'í', 'ó', 'ú'};
    char circunflexo[6] = {'Â', 'Ê', 'Ô', 'â', 'ê', 'ô'};
    char grave[2] = {'À', 'à'};
    char til[6] = {'Ã', 'Õ', 'Ñ', 'ã', 'õ', 'ñ'};
    char trema[2] = {'Ü', 'ü'};
    char cedilha[2] = {'Ç', 'ç'};

    for (i = 0; i < 5; i++)
        printf("Real:%c Distorcido:%c %3d\n", cc(vogal[i]), vogal[i], vogal[i]);
    putchar('\n');

    for (i = 0; i < 10; i++)
        printf("Real:%c Distorcido:%c %3d\n", cc(agudo[i]), agudo[i], agudo[i]);
    putchar('\n');

    for (i = 0; i < 6; i++)
        printf("Real:%c Distorcido:%c %3d\n", cc(circunflexo[i]), circunflexo[i], circunflexo[i]);
    putchar('\n');

    for (i = 0; i < 2; i++)
        printf("Real:%c Distorcido:%c %3d\n", cc(grave[i]), grave[i], grave[i]);
    putchar('\n');

    for (i = 0; i < 6; i++)
        printf("Real:%c Distorcido:%c %3d\n", cc(til[i]), til[i], til[i]);
    putchar('\n');

    for (i = 0; i < 2; i++)
        printf("Real:%c Distorcido:%c %3d\n", cc(trema[i]), trema[i], trema[i]);
    putchar('\n');

    for (i = 0; i < 2; i++)
        printf("Real:%c Distorcido:%c %3d\n", cc(cedilha[i]), cedilha[i], cedilha[i]);
    putchar('\n');

    c = getchar();
    printf("Lido:%c Real:%c\n", c, cc(c));

    return 0;
}