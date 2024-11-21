<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.1">
	<xsl:template match="/">
		<html>
			<head>
				<title>Employee information</title>
			</head>
			<body>
				<xsl:for-each select="Employees/Employee">
					<h2>
						<span>
							Employee name: <xsl:value-of select="Emp_name/firstname"></xsl:value-of>
							<xsl:value-of select="Emp_name/lastname"></xsl:value-of>
						</span>
					</h2>
					<h5>
						<xsl:value-of select="Emp_name/@empID"></xsl:value-of>
					</h5>
				</xsl:for-each>
			</body>
		</html>
	</xsl:template>
</xsl:stylesheet>