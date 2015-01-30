#!/bin/sh
set -x
DIR=`dirname $0` &&
cd $DIR &&
rm -f plm-couleur.pdf &&
#--- First pass
/usr/texbin/pdflatex --file-line-error --shell-escape '\newcommand\afficherDetailSchema{false}\input{livre-plm.tex}' &&
touch ref.idx &&
#touch ref.lof &&
#touch ref.lot &&
#touch ref.prgm-spice &&
touch ref.toc &&
iteration=0 &&
while [ `cmp -s ref.idx livre-plm.idx ; echo $?` -ne 0 ] \
    || [ `cmp -s ref.toc livre-plm.toc ; echo $?` -ne 0 ] \
#   || [ `cmp -s ref.lot livre-plm.lot ; echo $?` -ne 0 ] \
#   || [ `cmp -s ref.prgm-spice livre-plm.prgm-spice ; echo $?` -ne 0 ] \
#   || [ `cmp -s ref.lof livre-plm.lof ; echo $?` -ne 0 ]
do
  cp livre-plm.idx ref.idx &&
#  cp livre-plm.lof ref.lof &&
#  cp livre-plm.lot ref.lot &&
#  cp livre-plm.prgm-spice ref.prgm-spice &&
  cp livre-plm.toc ref.toc &&
  /usr/texbin/makeindex -s $DIR/fichiers-inclus/style-indexes.ist livre-plm.idx &&
  /usr/texbin/pdflatex --file-line-error --shell-escape '\newcommand\afficherDetailSchema{false}\input{livre-plm.tex}' &&
  iteration=$((iteration+=1))
done &&
cp livre-plm.pdf livre-plm-couleur.pdf &&
echo "---------------- SUCCES $iteration iterations"
