#!/bin/bash

# Define backup destination directory
backup_dir="/var/opt/gitlab/backups"

# Create a timestamp for the backup file
#timestamp=$(date +"%Y%m%d_%H%M%S")

# Define log file
#log_file="${backup_dir}/Back_up_${timestamp}.log"

# Backup GitLab data and configurations, and log the process
#sudo tar czvf "${backup_dir}/gitlab_backup_${timestamp}.tar.gz" \
#    /var/opt/gitlab/git-data \
#    /var/opt/gitlab/gitlab-rails/uploads \
#    /etc/gitlab >> "$log_file" 2>&1

# Change ownership of the backup files to userver
#sudo chown userver:userver "${backup_dir}/gitlab_backup_${timestamp}.tar.gz"
#sudo chown userver:userver "$log_file"

# Log the deletion process for files older than 7 days
#find "${backup_dir}" -name "gitlab_backup_*.tar.gz" -type f -mtime +7 -delete >> "$log_file" 2>&1
#find "${backup_dir}" -name "Back_up_*.log" -type f -mtime +7 -delete >> "$log_file" 2>&1

#Create Backup File
/opt/gitlab/bin/gitlab-backup create

# Delete backups older than 7 Days
find "${backup_dir}" -type f -name "*.tar" -mtime +7 -exec rm -f {} \;
