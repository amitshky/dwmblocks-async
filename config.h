#ifndef CONFIG_H
#define CONFIG_H

#define SIGNALS

// String used to delimit block outputs in the status.
#define DELIMITER " | "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X) \
	X(" ", "pactl get-sink-volume @DEFAULT_SINK@ | awk '{print $5}'", 0, 10) \
	X("", "$HOME/dev/config/scripts/linux/batteryPercent.sh", 30, 5) \
	X("󰃰 ", "date '+%F %a %H:%M'", 60, 0)

#endif  // CONFIG_H
