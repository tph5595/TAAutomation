#include <stdio.h>

main(int argc, char **argv){
  if(argc > 2){
    printf("Usage:\n\t" + argv[0]  + " [pathToDefinitionFile] {filesToCheck; atleast 1}");
    return;
  }

  FILE *fp;
  char buff[255];

  //open definition file
  fp = fopen(argv[1], "r");

  //open first java file to check
  for(int i = 0; i < argc-2; i++){
    fscanf(fp, "%s", buff);
    printf("1 : %s\n", buff );
  };
}
