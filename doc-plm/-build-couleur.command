#!/bin/sh
set -x
DIR=`dirname $0` &&
cd $DIR &&
rm -f plm-couleur.pdf &&
#--- First pass
/usr/texbin/pdflatex --file-line-error --shell-escape '\newcommand\afficherDetailSchema{false}\input{doc-plm.tex}' &&
touch ref.idx &&
#touch ref.lof &&
#touch ref.lot &&
#touch ref.prgm-spice &&
touch ref.toc &&
iteration=0 &&
while [ `cmp -s ref.idx doc-plm.idx ; echo $?` -ne 0 ] \
    || [ `cmp -s ref.toc doc-plm.toc ; echo $?` -ne 0 ] \
#   || [ `cmp -s ref.lot doc-plm.lot ; echo $?` -ne 0 ] \
#   || [ `cmp -s ref.prgm-spice doc-plm.prgm-spice ; echo $?` -ne 0 ] \
#   || [ `cmp -s ref.lof doc-plm.lof ; echo $?` -ne 0 ]
do
  cp doc-plm.idx ref.idx &&
#  cp doc-plm.lof ref.lof &&
#  cp doc-plm.lot ref.lot &&
#  cp doc-plm.prgm-spice ref.prgm-spice &&
  cp doc-plm.toc ref.toc &&
  /usr/texbin/makeindex -s $DIR/fichiers-inclus/style-indexes.ist doc-plm.idx &&
  /usr/texbin/pdflatex --file-line-error --shell-escape '\newcommand\afficherDetailSchema{false}\input{doc-plm.tex}' &&
  iteration=$((iteration+=1))
done &&
echo "---------------- SUCCES $iteration iterations"
