function Initialize()
	-- Use Skin Uptime instead of reboot
	time = os.time()
end

function Update()

	local diff = os.difftime(os.time(), time)
	local hours = math.floor(diff / 3600)
	local mins = math.floor((diff - hours * 3600) / 60)
      
	return(hours .. "h " .. mins .. "m")

end
