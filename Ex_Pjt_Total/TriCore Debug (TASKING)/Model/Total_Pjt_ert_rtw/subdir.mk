################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
"../Model/Total_Pjt_ert_rtw/ert_main.c" 

COMPILED_SRCS += \
"Model/Total_Pjt_ert_rtw/ert_main.src" 

C_DEPS += \
"./Model/Total_Pjt_ert_rtw/ert_main.d" 

OBJS += \
"Model/Total_Pjt_ert_rtw/ert_main.o" 


# Each subdirectory must supply rules for building sources it contributes
"Model/Total_Pjt_ert_rtw/ert_main.src":"../Model/Total_Pjt_ert_rtw/ert_main.c" "Model/Total_Pjt_ert_rtw/subdir.mk"
	cctc -cs --dep-file="$*.d" --misrac-version=2004 -D__CPU__=tc27xd "-fC:/Users/User/AURIX-v1.10.6-workspace/Ex_Pjt_Total/TriCore Debug (TASKING)/TASKING_C_C___Compiler-Include_paths__-I_.opt" --iso=99 --c++14 --language=+volatile --exceptions --anachronisms --fp-model=3 -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc27xd -Y0 -N0 -Z0 -o "$@" "$<"
"Model/Total_Pjt_ert_rtw/ert_main.o":"Model/Total_Pjt_ert_rtw/ert_main.src" "Model/Total_Pjt_ert_rtw/subdir.mk"
	astc -Og -Os --no-warnings= --error-limit=42 -o  "$@" "$<"

clean: clean-Model-2f-Total_Pjt_ert_rtw

clean-Model-2f-Total_Pjt_ert_rtw:
	-$(RM) ./Model/Total_Pjt_ert_rtw/ert_main.d ./Model/Total_Pjt_ert_rtw/ert_main.o ./Model/Total_Pjt_ert_rtw/ert_main.src

.PHONY: clean-Model-2f-Total_Pjt_ert_rtw

