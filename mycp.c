#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<dirent.h>
#include<stdlib.h>
#include <sys/stat.h>

void copy_file(char* src,char* dst,mode_t mode)
{
	struct stat sbuf_src;
	if(S_ISREG(sbuf_src.st_mode))
	{	struct stat sbuf_dst;
	if(lstat(dst,&sbuf_dst)==-1)
	{
	FILE *fp_dst = fopen(dst,"w");
	FILE *fp_src = fopen(src,"r");
	if(fp_dst ==NULL ||fp_src ==NULL)
	{
	fprintf(stderr,"open file errror\n");
	return;
	}
	chmod(dst,sbuf_src.st_mode);

	char buf[10]={};
	int r;
	while((r=fread(buf,1,sizeof(buf),fp_src))>0)
		fwrite(buf,1,r,fp_dst);
	}
	fclose(*src);
	fclose(*dst);
	}
}


int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		fprintf(stderr,"%s src dst\n",argv[0]);
		exit(1);
	}
	struct stat sbuf_src;
	if(lstat(argv[1],&sbuf_src)==-1)
	{
		fprintf(stderr,"%s tan90\0",argv[1]);
		exit(1);
	}
	mode_t old=umask(0);
	else (S_ISREG(sbuf_src.st_mode))
	{
		if(S_ISREG(sbuf_dst.st_mode))
		{
			printf("yicunzai,shifufugai?[y/n]");
			char c='n';
			scanf("%[yYnN]",&c);
			if(c=='y' ||c=='Y')
		{
			copy_file(src,dst,sbuf_src.st_mode);
		}
		}
		else if(S_ISDIR(sbuf_dst.st_mode))
		{
			int len=strlen(src)+2+strlen(dst);
			char *tmp=(char*)malloc(len);
			sprintf(tmp,"%s/%s",dst,src);
			copy_file(src,dst,sbuf_src.st_mode);
		}
		else if(lstat(argv[2],sbuf_dst.st_mode) == -1)
		{
			
		}
	else if(S_ISDIR(sbuf_src.st_mode))
	{
		if (lstat(argv[2],sbuf_dst.st_mode) == -1)
		{
			
		}
	}
}
