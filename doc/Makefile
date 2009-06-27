TARGET=pinocchio-whitepaper

OUTPUT=$(TARGET).pdf
INPUT=$(TARGET).tex
FACTORY=pdflatex
TIMES=3
VIEWER=evince
RESIDUE=log aux pdf out bbl blg

all: $(OUTPUT)

$(OUTPUT): $(INPUT)
	$(FACTORY) $(INPUT)
	# bibtex $(TARGET)
	for i in `seq 1 $(TIMES)`; do $(FACTORY) $(INPUT); done

view: $(OUTPUT)
	$(VIEWER) $(OUTPUT)

clean:
	@for EXT in $(RESIDUE); do rm -rf $(TARGET).$$EXT; done

count: $(OUTPUT)
	@echo "`pdftotext $(OUTPUT) - | wc -w` words" # I removed grep -E '\w\w\w+' since it almost doesn't have any effect
