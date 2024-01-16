mkdir photos
find \( -name '*.jpg' -o -name '*.jpeg' -o -name '*.png' \) -type f | xargs cp -vt photos
cd photos
find \( -name '*.jpg' -o name '*.jpeg' -o -name '*.png' \) -type f -delete
cd..
tar -zcvf photos_personal.gz photos
rm -r photos
