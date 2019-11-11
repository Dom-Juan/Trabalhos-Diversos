#include "main.h"

void Gerar_Array(int vetor[max]){
	
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	
	srand(time(NULL));

	for(i=0; i<max; i++)
		vetor[i]= rand()%75000;
	
	printf("\n *Valores gerados automaticamente*\n");
	
	return;
}

void Vetor_Crescente(int vetor[max]){
	
	setlocale(LC_ALL,"Portuguese");
	
	int j;

	for(j=0; j<max; j++)
		vetor[j]= j;
	
	printf("\n *Valores gerados automaticamente*\n");

	return;
}

void Vetor_Decrescente(int vetor[max]){
	
	setlocale(LC_ALL,"Portuguese");
	
	int k,i=75000;

	for(k = 0; k<max; k++){
		vetor[k] = i;
		i = i - 1;
	}
	
	printf("\n *Valores gerados automaticamente*\n");
	
	return;
}

void Registrar_a_execucao(float c[max],int i,int tipo,int ordem){
	int b;
	
	if(tipo == 1){
		
		if(ordem == 0){
			if( (f=fopen("Execu��o Insertion Sort Aleat�rio.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do Insertion Sort com vetor de elementos em ordem aleat�ria [Execu��o %d]: %f\n", b,c[b]);
			}
		}
		else if(ordem == 1){
			if( (f=fopen("Execu��o Insertion Sort Crescente.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do Insertion Sort com vetor de elementos em ordem crescente [Execu��o %d]: %f\n", b,c[b]);
			}			
		}
		
		else{
			if( (f=fopen("Execu��o Insertion Sort Decrescente.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do Insertion Sort com vetor de elementos em ordem decrescente [Execu��o %d]: %f\n", b,c[b]);
			}			
		}

	}
	
	else if(tipo == 2){
		
		if (ordem == 0){
			if( (f=fopen("Execu��o Bubblesort normal Aleat�rio.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do Bubblesort normal com vetor de elementos em ordem aleat�ria [Execu��o %d]: %f\n", b,c[b]);
			}
		}
		
		else if(ordem == 1){
			if( (f=fopen("Execu��o Bubblesort normal Crescente.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do Bubblesort normal com vetor de elementos em ordem crescente [Execu��o %d]: %f\n", b,c[b]);
			}
		}
		
		else{
			if( (f=fopen("Execu��o Bubblesort normal Decrescente.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do Bubblesort normal com vetor de elementos em ordem decrescente [Execu��o %d]: %f\n", b,c[b]);
			}
		}
	}
	
	else if(tipo == 3){
		
		if(ordem == 0){
			if( (f=fopen("Execu��o Bubblesort Melhorado Aleat�rio.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do Bubblesort Melhorado com vetor de elementos em ordem aleat�rio [Execu��o %d]: %f\n", b,c[b]);
			}
		}
		
		else if(ordem == 1){
			if( (f=fopen("Execu��o Bubblesort Melhorado Crescente.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do Bubblesort Melhorado com vetor de elementos em ordem crescente [Execu��o %d]: %f\n", b,c[b]);
			}
		}
		
		else{
			if( (f=fopen("Execu��o Bubblesort Melhorado Decrescente.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do Bubblesort Melhorado com vetor de elementos em ordem decrescente [Execu��o %d]: %f\n", b,c[b]);
			}
		}
	}
	
	else if(tipo == 4){

		if(ordem == 0){
			if( (f=fopen("Execu��o Quicksort (Piv�=elemento central) Aleat�rio.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do QuickSort com vetor de elementos em ordem aleat�ria [Execu��o %d]: %f\n", b,c[b]);
			}
		}
		
		else if(ordem == 1){
			if( (f=fopen("Execu��o Quicksort (Piv�=elemento central) Crescente.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do QuickSort com vetor de elementos em ordem crescente [Execu��o %d]: %f\n", b,c[b]);
			}
		}

		else{
			if( (f=fopen("Execu��o Quicksort (Piv�=elemento central) Decrescente.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do QuickSort com vetor de elementos em ordem decrescente [Execu��o %d]: %f\n", b,c[b]);
			}
		}
	}
	
	else if(tipo == 5){

		if(ordem == 0){
			if( (f=fopen("Execu��o Mergesort Aleat�rio.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do MergeSort com vetor de elementos em ordem aleat�ria [Execu��o %d]: %f\n", b,c[b]);
			}
		}
		
		else if(ordem == 1){
			if( (f=fopen("Execu��o Mergesort Crescente.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do MergeSort com vetor de elementos em ordem crescente [Execu��o %d]: %f\n", b,c[b]);
			}
		}

		else{
			if( (f=fopen("Execu��o Mergesort Decrescente.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do MergeSort com vetor de elementos em ordem decrescente [Execu��o %d]: %f\n", b,c[b]);
			}
		}
	}
	
	else if(tipo == 6){
		
		if(ordem == 0){
			if( (f=fopen("Execu��o Heapsort Aleat�rio.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do HeapSort com vetor de elementos em ordem aleat�ria [Execu��o %d]: %f\n", b,c[b]);
			}
		}

		else if(ordem == 1){
			if( (f=fopen("Execu��o Heapsort Crescente.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do HeapSort com vetor de elementos em ordem crescente [Execu��o %d]: %f\n", b,c[b]);
			}
		}

		else{
			if( (f=fopen("Execu��o Heapsort Decrescente.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do HeapSort com vetor de elementos em ordem decrescente [Execu��o %d]: %f\n", b,c[b]);
			}
		}
	}
	
	else if(tipo == 7){
		
		if(ordem == 0){
			if( (f=fopen("Execu��o Shellsort Aleat�rio.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do ShellSort com vetor de elementos em ordem aleat�ria [Execu��o %d]: %f\n", b,c[b]);
			}
		}

		else if(ordem == 1){
			if( (f=fopen("Execu��o Shellsort Crescente.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do ShellSort com vetor de elementos em ordem crescente [Execu��o %d]: %f\n", b,c[b]);
			}
		}

		else{
			if( (f=fopen("Execu��o Shellsort Decrescente.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do ShellSort com vetor de elementos em ordem decrescente [Execu��o %d]: %f\n", b,c[b]);
			}
		}
	}
	
	else{

		if(ordem == 0){
			if( (f=fopen("Execu��o Sele��o Direta Aleat�rio.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do Sele��o Direta com vetor de elementos em ordem aleat�ria [Execu��o %d]: %f\n", b,c[b]);
			}
		}
		
		else if(ordem == 1){
			if( (f=fopen("Execu��o Sele��o Direta Crescente.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do Sele��o Direta com vetor de elementos em ordem crescente [Execu��o %d]: %f\n", b,c[b]);
			}
		}
		
		else{
			if( (f=fopen("Execu��o Sele��o Direta Decrescente.txt", "w+") ) == NULL) {
    			printf("ERRO na abertura do arquivo: %s!!! O arquivo est� criado? \n", "Execu��o.txt");
    			exit(1);
			}
			
			for(b=0; b<i; b++){
				fprintf(f, "Tempo de execu��o do Sele��o Direta com vetor de elementos em ordem decrescente [Execu��o %d]: %f\n", b,c[b]);
			}
		}
	}
	
		fclose(f);
		
		for(b; b<0; b--)
			c[b]=0;	
		
		printf("\n*Tempo de execu��o registrado*\n");
		
	return;
}

void mostrar_o_vetor(int vetor[max]){
	int a;
	
	for(a=0; a<max; a++)
		printf("%d\n",vetor[a]);
		
	return;
}
