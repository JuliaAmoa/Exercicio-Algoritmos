Feito pelos acadêmicos: Angel Anacleto A e Silva, Bernardo Prantz Pin, Gustavo Varela, Julia Amorim de Oliveira, Leonardo Lunardelli e Samuel Eduardo Santana.

---

## Fluxo de execução do programa

- Configura o locale para Português do Brasil com `setlocale(LC_ALL, "pt_br.utf-8")`.
-  Declara arrays:  
   - `string nomes[5]` para armazenar nomes.  
   - `float notas[5][3]` como matriz para três notas de cada aluno.  
   - `float medias[5]` para armazenar as médias calculadas.  
- Um loop `for` para ler nome e três notas de cada um dos cinco alunos via `cin`.  
- `system("cls")` para limpar a tela antes de exibir a saída formatada.  
- Outro loop `for` que percorre cada aluno, calcula a média, compara com a maior registrada até então e imprime linha a linha da tabela.  
- Ao fim, exibe a maior média encontrada e o nome do respectivo aluno.


## Principais funções e recursos explicados

- `string nomes[5]` e `float notas[5][3]`  
  - Exemplos de array unidimensional e bidimensional. Permitem armazenar múltiplos valores em estruturas indexadas, facilitando iteração e acesso sequencial.

- `for (int i = 0; i < 5; i++)`  
  - Loop controlado por contador, usado tanto na leitura de dados quanto na exibição, garantindo repetição pré-determinada de operações.

- Manipuladores de fluxo em `<iomanip>`  
  - `left` alinha o texto à esquerda.  
  - `setw(n)` define largura fixa de campo para cada coluna.  
  - `setprecision(2)` controla casas decimais exibidas na média.  
  - Esses manipuladores juntos garantem uma tabela com colunas alinhadas e valores formatados.

- Controle de condição `if (medias[i] >= 7)`  
  - Verifica aprovação com critério de média mínima igual a 7. Emite “Aprovado” ou “Reprovado” conforme resultado.

- Identificação da maior média  
  - Variável `maiornota` armazena o índice da melhor média. A cada cálculo, compara `medias[i]` com `medias[maiornota]` para atualizar essa referência.
