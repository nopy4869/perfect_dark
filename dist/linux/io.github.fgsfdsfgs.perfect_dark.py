#!/usr/bin/python
import argparse
import subprocess

xdg_data_home = os.environ["XDG_XATA_HOME"]

# Create data/saves/mods directories if needed
for directory in ["data", "saves", "mods"]:
    abs_dir = os.path.join(xdg_data_home, directory)
    if not os.path.isdir(abs_dir):
        os.makedirs(abs_dir)

parser = argparse.ArgumentParser()

# TODO: Implement ability to select game ROM and choose correct executable based on that choice
# - check for .z64 files in data path
# - if none found, exit with error message
# - if only one found:
#   - check filename or md5sum and run appropriate executable
#   - if no matches, exit with error message
# - for each rom:
#   - if rom filename matches selected version, run game
#   - else:
#     - md5sum the roms one by one
#     - if one matches the selected version: use that one
#     - else error out

# TODO: implement mod loading
# - if romdir parameter is relative, prefix with $XDG_DATA_HOME/mods
# - else use as is

# TODO: implement arbitrary other parameters
# - get unmatched arguments from ArgumentParser
# - pass them through to executable

default_args = ["--basedir", f"{xdg_data_home}/data", "--savedir", f"{xdg_data_home}/saves"]
subprocess.run(["pd"] + default_args)
