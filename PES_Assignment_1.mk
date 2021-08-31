##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=PES_Assignment_1
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/ujjai/Documents/PES_Assignment_1
ProjectPath            :=C:/Users/ujjai/Documents/PES_Assignment_1/PES_Assignment_1
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=ujjai
Date                   :=31/08/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/MinGW/bin/g++.exe
SharedObjectLinkerName :=C:/MinGW/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="PES_Assignment_1.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/MinGW/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/MinGW/bin/ar.exe rcu
CXX      := C:/MinGW/bin/g++.exe
CC       := C:/MinGW/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/MinGW/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/hexdump.c$(ObjectSuffix) $(IntermediateDirectory)/int_to_binstr.c$(ObjectSuffix) $(IntermediateDirectory)/uint_to_hexstr.c$(ObjectSuffix) $(IntermediateDirectory)/test.c$(ObjectSuffix) $(IntermediateDirectory)/grab_three_bits.c$(ObjectSuffix) $(IntermediateDirectory)/twiggle_bit.c$(ObjectSuffix) $(IntermediateDirectory)/main.c$(ObjectSuffix) $(IntermediateDirectory)/uint_to_binstr.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/hexdump.c$(ObjectSuffix): hexdump.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/hexdump.c$(ObjectSuffix) -MF$(IntermediateDirectory)/hexdump.c$(DependSuffix) -MM hexdump.c
	$(CC) $(SourceSwitch) "C:/Users/ujjai/Documents/PES_Assignment_1/PES_Assignment_1/hexdump.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/hexdump.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/hexdump.c$(PreprocessSuffix): hexdump.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/hexdump.c$(PreprocessSuffix) hexdump.c

$(IntermediateDirectory)/int_to_binstr.c$(ObjectSuffix): int_to_binstr.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/int_to_binstr.c$(ObjectSuffix) -MF$(IntermediateDirectory)/int_to_binstr.c$(DependSuffix) -MM int_to_binstr.c
	$(CC) $(SourceSwitch) "C:/Users/ujjai/Documents/PES_Assignment_1/PES_Assignment_1/int_to_binstr.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/int_to_binstr.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/int_to_binstr.c$(PreprocessSuffix): int_to_binstr.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/int_to_binstr.c$(PreprocessSuffix) int_to_binstr.c

$(IntermediateDirectory)/uint_to_hexstr.c$(ObjectSuffix): uint_to_hexstr.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/uint_to_hexstr.c$(ObjectSuffix) -MF$(IntermediateDirectory)/uint_to_hexstr.c$(DependSuffix) -MM uint_to_hexstr.c
	$(CC) $(SourceSwitch) "C:/Users/ujjai/Documents/PES_Assignment_1/PES_Assignment_1/uint_to_hexstr.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/uint_to_hexstr.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/uint_to_hexstr.c$(PreprocessSuffix): uint_to_hexstr.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/uint_to_hexstr.c$(PreprocessSuffix) uint_to_hexstr.c

$(IntermediateDirectory)/test.c$(ObjectSuffix): test.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/test.c$(ObjectSuffix) -MF$(IntermediateDirectory)/test.c$(DependSuffix) -MM test.c
	$(CC) $(SourceSwitch) "C:/Users/ujjai/Documents/PES_Assignment_1/PES_Assignment_1/test.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/test.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/test.c$(PreprocessSuffix): test.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/test.c$(PreprocessSuffix) test.c

$(IntermediateDirectory)/grab_three_bits.c$(ObjectSuffix): grab_three_bits.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/grab_three_bits.c$(ObjectSuffix) -MF$(IntermediateDirectory)/grab_three_bits.c$(DependSuffix) -MM grab_three_bits.c
	$(CC) $(SourceSwitch) "C:/Users/ujjai/Documents/PES_Assignment_1/PES_Assignment_1/grab_three_bits.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/grab_three_bits.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/grab_three_bits.c$(PreprocessSuffix): grab_three_bits.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/grab_three_bits.c$(PreprocessSuffix) grab_three_bits.c

$(IntermediateDirectory)/twiggle_bit.c$(ObjectSuffix): twiggle_bit.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/twiggle_bit.c$(ObjectSuffix) -MF$(IntermediateDirectory)/twiggle_bit.c$(DependSuffix) -MM twiggle_bit.c
	$(CC) $(SourceSwitch) "C:/Users/ujjai/Documents/PES_Assignment_1/PES_Assignment_1/twiggle_bit.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/twiggle_bit.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/twiggle_bit.c$(PreprocessSuffix): twiggle_bit.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/twiggle_bit.c$(PreprocessSuffix) twiggle_bit.c

$(IntermediateDirectory)/main.c$(ObjectSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/main.c$(DependSuffix) -MM main.c
	$(CC) $(SourceSwitch) "C:/Users/ujjai/Documents/PES_Assignment_1/PES_Assignment_1/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.c$(PreprocessSuffix): main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.c$(PreprocessSuffix) main.c

$(IntermediateDirectory)/uint_to_binstr.c$(ObjectSuffix): uint_to_binstr.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/uint_to_binstr.c$(ObjectSuffix) -MF$(IntermediateDirectory)/uint_to_binstr.c$(DependSuffix) -MM uint_to_binstr.c
	$(CC) $(SourceSwitch) "C:/Users/ujjai/Documents/PES_Assignment_1/PES_Assignment_1/uint_to_binstr.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/uint_to_binstr.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/uint_to_binstr.c$(PreprocessSuffix): uint_to_binstr.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/uint_to_binstr.c$(PreprocessSuffix) uint_to_binstr.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


