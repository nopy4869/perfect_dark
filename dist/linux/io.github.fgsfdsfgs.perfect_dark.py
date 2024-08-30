#!/usr/bin/python
import argparse
import subprocess

parser = argparse.ArgumentParser()

for directory in ["data", "saves", "mods"]:
    abs_dir = os.path.join(os.environ["XDG_DATA_HOME"], directory
    if not os.path.isdir(abs_dir):
        os.makedirs(abs_dir)

xdg_data_home = os.environ["XDG_XATA_HOME"]
default_args = ["--basedir", f"{xdg_data_home}/data", "--savedir", f"{xdg_data_home}/saves"]

subprocess.run(["pd"] + default_args)
