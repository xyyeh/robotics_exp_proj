# !/bin/bash

# Updates the name of this project to a new name. Mainly used to create libraries

# check input for project name
if [ -z "$1" ]; then
    echo "New project name required!"
    echo "Usage: bash create_lib.sh <new project name>"
    exit
fi

curr_dir=`pwd`

echo "Creating lib $1"

echo "Updating CMakeLists.txt"
cd $curr_dir
sed -i 's/robotics_exp_proj/'$1'/g' CMakeLists.txt

echo "Setting up /cmake folder"
cd $dir/cmake
sed -i 's/robotics_exp_proj/'$1'/g' config.h.in
sed -i 's/ROBOTICS_EXP_PROJ/'${1^^}'/g' config.h.in
for file in *.cmake.in ; do mv $file ${file//robotics_exp_proj/"$1"} ; done