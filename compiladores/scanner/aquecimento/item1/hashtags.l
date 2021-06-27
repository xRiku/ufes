/* Remova da entrada todas as ocorrências de # e o restante da linha. Útil para eliminar
comentários em scripts shell. Obs.: é possı́vel resolver esse item com apenas duas linhas
de código no flex. */
%%

#.*    { }



%%