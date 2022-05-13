char ingresoDatos(char);
char *ingresoDatosEntero(char *msj){
	char *dato=new char[10],c;
	int i=0;
	printf("%s ",msj);
	while((c=getch())!=13){
		if(c>='0'&& c<='9'){
			printf("%c",c);
			dato[i++]=c;
		}
	}
	dato[i]='\0';
	return dato;
}