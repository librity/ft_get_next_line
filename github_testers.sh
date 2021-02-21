# INSTALL VALGRIND
cd ~
rm -rf $HOME/.brew && \
	git clone --depth=1 https://github.com/Homebrew/brew $HOME/.brew && \
	echo 'export PATH=$HOME/.brew/bin:$PATH' >> $HOME/.zshrc && \
	source $HOME/.zshrc && \
	brew update
curl https://raw.githubusercontent.com/sowson/valgrind/master/valgrind.rb > valgrind.rb
brew install --HEAD valgrind.rb

# CLONE YOUR PROJECT
cd ~
# git clone 42_INTRA_REPO_ADDRESS gnl
git clone git@vogsphere-v2.42sp.org.br:vogsphere/intra-uuid-cc300066-2eac-4677-add6-aa343962453f-3456870 gnl
cd gnl
norminette *.c *.h

# CLONE ALL GITHUB TESTERS
git clone https://github.com/charMstr/GNL_lover.git
git clone https://github.com/lgrellie/gnl_tester.git
git clone https://github.com/mrjvs/42cursus_gnl_tests.git
git clone https://github.com/Mazoise/42TESTERS-GNL.git
git clone https://github.com/Hellio404/Get_Next_Line_Tester.git
git clone https://github.com/C4r4c0l3/gnl-war-machine-v2019.git
git clone https://github.com/Sherchryst/gnlkiller.git
git clone https://github.com/harm-smits/gnl-unit-test.git
git clone https://github.com/Tripouille/gnlTester.git
git clone https://github.com/saarikoski-jules/gnl_unit_tests.git
chmod 777 */*.sh

# RUN GNL_lover
cd GNL_lover
cp ../get_next_line.c ../get_next_line_utils.c ../get_next_line.h copy_in_here_GNL_files 
./GNL_lover.sh
cd ..

# RUN gnl_tester
cd gnl_tester
cp ../get_next_line.c ../get_next_line_utils.c ../get_next_line.h . 
# ./run_tests.sh 0
./run_tests.sh 1
./run_tests.sh 2
./run_tests.sh 3
./run_tests.sh 4
./run_tests.sh 5
./run_tests.sh 6
./run_tests.sh 7
./run_tests.sh 8
./run_tests.sh 9999
./run_tests.sh 10000000
./run_tests.sh 99999999
# ./run_tests.sh 9999999999
cd ..

# RUN 42cursus_gnl_tests
cd 42cursus_gnl_tests
mkdir get_next_line
cp ../get_next_line.c ../get_next_line_utils.c ../get_next_line.h get_next_line 
make
cd ..

# RUN 42TESTERS-GNL
cd 42TESTERS-GNL
./all_tests.sh
cd ..

# RUN Get_Next_Line_Tester
cd Get_Next_Line_Tester
bash run.sh
cd ..

# RUN gnl-war-machine-v2019
cd gnl-war-machine-v2019
sed -i '' "s/..\/..\/get_next_line/../" my_config.sh
./grademe.sh
cd ..

# RUN gnlkiller
cd gnlkiller
cp ../get_next_line.c ../get_next_line_utils.c ../get_next_line.h . 
bash test.sh
cd ..

# RUN gnlTester
cd gnlTester
make m
cd ..

# RUN gnl-unit-test
cd gnl-unit-test
cp ../get_next_line.c ../get_next_line_utils.c ../get_next_line.h . 
bash test.sh
cd ..

# RUN gnl_unit_tests
cd gnl_unit_tests
sed -i '' "s/PATH_GNL=\"..\/get_next_line\"/PATH_GNL=../" run_tests.sh
sh run_tests.sh
cd ..
