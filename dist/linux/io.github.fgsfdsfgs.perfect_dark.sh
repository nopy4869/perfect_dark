#!/bin/sh

# Create user data directories if necessary
userdirs=( roms saves mods )
for path in "${userdirs[@]}"; do
    if [[ ! -d "${XDG_DATA_HOME}/${path}" ]]; then
        mkdir -p "${XDG_DATA_HOME}/${path}"
    fi
done

# If first parameter is one of the pd executables, execute that
# and pass the remaining parameters to it; otherwise default to
# pd and pass all arguments to it
case $1 in
    "pd."*)
        executable=$1
        params="${@:2}"
        ;;
    *)
        executable=pd
        params="$@"
        ;;
esac

# Run game
$executable --basedir ${XDG_DATA_HOME}/roms --savedir ${XDG_DATA_HOME}/saves $params
