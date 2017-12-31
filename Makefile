build-windows:
	python.exe setup.py build

install-windows:
	python.exe setup.py install

build-unix:
	python3 setup.py build

install-unix:
	python3 setup.py install

.PHONY: clean-windows clean-unix


#
# NOTE: requires you have Unix' `rm`: either on Unix itself,
# or on an environment for Windows (ideally the same that
# provides this make executable, too)
#
clean:
	rm -r build