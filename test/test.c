#include <criterion/criterion.h> // Inclui a biblioteca Criterion

// Função para verificar se um valor está dentro do intervalo razoável
int reasonable_values(float value){
    // Retorna true se o valor estiver entre 8.0 e 35.0
    return (value > 8.0 && value < 35.0);
}

// Teste para verificar a função reasonable_values
Test(suite_name, test_name){
    // Verifica se a função retorna 1 quando o valor 25.0 é atribuído
    cr_assert(reasonable_values(26.0));
}