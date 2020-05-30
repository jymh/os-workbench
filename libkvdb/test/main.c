#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <kvdb.h>
int main() 
{
  struct kvdb *db;
  const char *key = "operating-systems";
  char *value;

  panic_on(!(db = kvdb_open("a.db")), "cannot open db");

  kvdb_put(db, key, "three-easy-pieces");
  value = kvdb_get(db, key); 
  kvdb_close(db);
  printf("[%s]: [%s]\n", key, value);
  free(value);
  return 0;
}