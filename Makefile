.PHONY: clean All

All:
	@echo "----------Building project:[ PES_Assignment_1 - Debug ]----------"
	@cd "PES_Assignment_1" && "$(MAKE)" -f  "PES_Assignment_1.mk"
clean:
	@echo "----------Cleaning project:[ PES_Assignment_1 - Debug ]----------"
	@cd "PES_Assignment_1" && "$(MAKE)" -f  "PES_Assignment_1.mk" clean
