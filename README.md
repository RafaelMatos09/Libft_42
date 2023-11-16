# Libft_42

<p align="center">
    Primeiro projeto, criar sua própria biblioteca de funções em C.
</p>
<p align="center">
<img src="http://img.shields.io/static/v1?label=STATUS&message=%20EM-DESENVOLVIMENTO&color=GREEN&style=for-the-badge"/>
</p>

<h1>Funções da libc</h1>

<p>Este repositório contém implementações em C de várias funções da libc, incluindo:</p>

<h2>1. ft_strlen(char *src)</h2>

<p>Verifica o tamanha de uma string, percorre a string incrementando um contador i que é retornado no final da função.</p>

<h2>2. ft_isalpha(int c)</h2>

<p>Verifica se o argumento passado é uma letra, a função verifica se é maiúscula ou minúscula, retornando falso ou verdadeiro.</p>

<h2>3. ft_isdigit(int c)</h2>

<p>Verifica se o argumento passado é um dígito de 1 a 9 na tabela ASCII.</p>

<h2>4. ft_isalnum(int c)</h2>

<p>Verifica se o argumento passado é alfanumérico, utilizando as funções ft_isdigit e ft_isalpha.</p>

<h2>5. ft_isascii(int c)</h2>

<p>Verifica se o argumento passado é um caractere ASCII com um valor numérico único, que varia de 0 a 127 em um conjunto de 7 bits.</p>

<h2>6. ft_isprint(int c)</h2>

<p>Verifica se é um caracater imprimível de acordo com a tabela ASCII.</p>

<h2>7. ft_memset(void *ptr, int value, size_t size)</h2>

<p>Preenche os primeiros size bytes da área de memória apontada por ptr com o byte constante value.</p>

<h2>8. ft_bzero(void *s, size_t n)</h2>

<p>A função bzero() apaga os dados nos n bytes de memória a partir da localização apontada por s, escrevendo zeros (bytes contendo '\0') nessa área.</p>

<h2>9. ft_memcpy(void *dest, const void *src, size_t n)</h2>

<p>A função memcpy() copia n bytes da área de memória src para a área de memória dest. As áreas de memória não devem se sobrepor. Use memmove(3) se as áreas de memória se sobrepõem.</p>

<h2>10. ft_memmove(void *dest, const void *src, size_t n)</h2>

<p>A função memmove() copia n bytes da área de memória src para a área de memória dest. As áreas de memória podem se sobrepor: a cópia acontece como se os bytes em src fossem primeiro copiados para uma matriz temporária que não se sobrepõe a src ou dest, e os bytes são então copiados da matriz temporária para dest.</p>

## Testes

### Teste 1

![Descrição do Teste 1](caminho/para/imagem1.jpg)

Breve descrição ou legenda para o Teste 1.

### Teste 2

![Descrição do Teste 2](caminho/para/imagem2.jpg)

Breve descrição ou legenda para o Teste 2.

