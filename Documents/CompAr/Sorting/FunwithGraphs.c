#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "GraphFuncs.h"


int main(int argc, char ** argv){

  
 struct node *a,*b,*c,*d,*e,*f;
 struct edge *ab,*ac,*bf,*be,*cf,*cd,*df,*ef,*af;
 struct Graph *g;
 int connectsize=9;
 int nodenumber=6;

  a=MakeDisjoint('a');
  b=MakeDisjoint('b');
  c=MakeDisjoint('c');
  d=MakeDisjoint('d');
  e=MakeDisjoint('e');
  f=MakeDisjoint('f');

  ab=MakeEdge(a,b,1);	    
  ac=MakeEdge(a,c,3);
  bf=MakeEdge(b,f,5);
  be=MakeEdge(b,e,4);
  cf=MakeEdge(c,f,4);
  cd=MakeEdge(c,d,10);
  df=MakeEdge(d,f,1);
  ef=MakeEdge(e,f,1);
  af=MakeEdge(a,f,5);
	    
  g=MakeGraph(nodenumber,connectsize);
  g->Letters[0]=a;
  g->Letters[1]=b;
  g->Letters[2]=c;
  g->Letters[3]=d;
  g->Letters[4]=e;
  g->Letters[5]=f;

  g->Connections[0]=ab;
  g->Connections[1]=ac;
  g->Connections[2]=bf;
  g->Connections[3]=be;
  g->Connections[4]=cf;
  g->Connections[5]=cd;
  g->Connections[6]=df;
  g->Connections[7]=ef;
  g->Connections[8]=af;


  PrintGraph(g,connectsize);
  int **AdjacencyMat= Matrix(nodenumber,g,connectsize);

  FindShortestPathFrom(2,connectsize,nodenumber,g);

  Prims(g,nodenumber,connectsize);
  ResetGraph(g,nodenumber);
  Kruskal(g,connectsize);

 




  /* 
  d=FindMyParents(d);
  printf("\n");
  Union(a,b);
  Union(c,d);
printf("\n");
  Union(a,c);
printf("\n"); 
printf("\n"); 
  FindMyParents(a);
printf("\n");
printf("\n"); 
 FindMyParents(b);
printf("\n");
printf("\n"); 
FindMyParents(c);*/

}
